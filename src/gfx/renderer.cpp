//
// Created by Asandei Stefan on 06.06.2023.
//

#include "renderer.h"

Renderer::Renderer(MTL::Device* pDevice) : BaseRenderer(pDevice) {
  _pDevice = pDevice->retain();
  _pCommandQueue = _pDevice->newCommandQueue();
}

Renderer::~Renderer() {
  _pCommandQueue->release();
  _pDevice->release();
}

void Renderer::draw(MTK::View* pView) {
  NS::AutoreleasePool* pPool = NS::AutoreleasePool::alloc()->init();

  MTL::CommandBuffer* pCmd = _pCommandQueue->commandBuffer();

  MTL::RenderPassDescriptor* pRpd = pView->currentRenderPassDescriptor();
  pRpd->colorAttachments()->object(0)->setClearColor(
      MTL::ClearColor(1.0, 0.1, 0.1, 1.0));

  MTL::RenderCommandEncoder* pEnc = pCmd->renderCommandEncoder(pRpd);

  pEnc->endEncoding();
  pCmd->presentDrawable(pView->currentDrawable());
  pCmd->commit();

  pPool->release();
}
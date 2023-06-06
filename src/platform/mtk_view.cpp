//
// Created by Asandei Stefan on 03.06.2023.
//

#include "platform/mtk_view.h"

#include "gfx/renderer.h"

MTKViewDelegate::MTKViewDelegate(MTL::Device* pDevice)
    : MTK::ViewDelegate(), _pRenderer(new Renderer(pDevice)) {}

MTKViewDelegate::~MTKViewDelegate() { delete _pRenderer; }

void MTKViewDelegate::drawInMTKView(MTK::View* pView) {
  _pRenderer->draw(pView);
}
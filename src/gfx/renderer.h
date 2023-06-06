//
// Created by Asandei Stefan on 06.06.2023.
//

#ifndef METALSTARTER_RENDERER_H
#define METALSTARTER_RENDERER_H

#include "gfx/base_renderer.h"

class Renderer : public BaseRenderer {
 public:
  explicit Renderer(MTL::Device* pDevice);
  ~Renderer() override;

  void draw(MTK::View* pView) override;

 private:
  MTL::Device* _pDevice;
  MTL::CommandQueue* _pCommandQueue;
};
;

#endif  // METALSTARTER_RENDERER_H

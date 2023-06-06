//
// Created by Asandei Stefan on 06.06.2023.
//

#ifndef METALSTARTER_BASE_RENDERER_H
#define METALSTARTER_BASE_RENDERER_H

#include "platform/apple.h"

class BaseRenderer {
 public:
  explicit BaseRenderer(MTL::Device* pDevice);
  virtual ~BaseRenderer() = default;

  virtual void draw(MTK::View* pView) {}

 private:
  MTL::Device* _pDevice;
  MTL::CommandQueue* _pCommandQueue;
};

#endif  // METALSTARTER_BASE_RENDERER_H

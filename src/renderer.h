//
// Created by Asandei Stefan on 06.06.2023.
//

#ifndef METALSTARTER_RENDERER_H
#define METALSTARTER_RENDERER_H

#include "platform/apple.h"

class Renderer {
 public:
  explicit Renderer(MTL::Device* pDevice);
  ~Renderer();

  void draw(MTK::View* pView);

 private:
  MTL::Device* _pDevice;
  MTL::CommandQueue* _pCommandQueue;
};
;

#endif  // METALSTARTER_RENDERER_H

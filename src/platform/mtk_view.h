//
// Created by Asandei Stefan on 03.06.2023.
//

#ifndef METALSTARTER_MTK_VIEW_H
#define METALSTARTER_MTK_VIEW_H

#include "gfx/base_renderer.h"
#include "platform/apple.h"

class MTKViewDelegate : public MTK::ViewDelegate {
 public:
  explicit MTKViewDelegate(MTL::Device *pDevice);
  ~MTKViewDelegate() override;

  void drawInMTKView(MTK::View *pView) override;

 private:
  BaseRenderer *_pRenderer;
};

#endif  // METALSTARTER_MTK_VIEW_H

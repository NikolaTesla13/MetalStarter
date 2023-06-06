//
// Created by Asandei Stefan on 06.06.2023.
//

#ifndef METALSTARTER_APP_DELEGATE_H
#define METALSTARTER_APP_DELEGATE_H

#include "platform/apple.h"
#include "platform/mtk_view.h"

class AppDelegate : public NS::ApplicationDelegate {
 public:
  ~AppDelegate() override;

  static NS::Menu* createMenuBar();

  void applicationWillFinishLaunching(NS::Notification* pNotification) override;
  void applicationDidFinishLaunching(NS::Notification* pNotification) override;
  bool applicationShouldTerminateAfterLastWindowClosed(
      NS::Application* pSender) override;

 private:
  NS::Window* _pWindow;
  MTK::View* _pMtkView;
  MTL::Device* _pDevice;

  MTKViewDelegate* _pViewDelegate = nullptr;
};

#endif  // METALSTARTER_APP_DELEGATE_H

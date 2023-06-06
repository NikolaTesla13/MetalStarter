#include "platform/app_delegate.h"

int main(int argc, char* argv[]) {
  NS::AutoreleasePool* pAutoreleasePool = NS::AutoreleasePool::alloc()->init();

  AppDelegate del;

  NS::Application* pSharedApplication = NS::Application::sharedApplication();
  pSharedApplication->setDelegate(&del);
  pSharedApplication->run();

  pAutoreleasePool->release();
  return 0;
}

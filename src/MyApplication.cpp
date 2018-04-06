#include <Magnum/DefaultFramebuffer.h>
#include <Magnum/Platform/Sdl2Application.h>
#include <Magnum/Context.h>
#include <Magnum/Renderer.h>
#include <Magnum/Version.h>
#include <Magnum/Math/Color.h>

using namespace Magnum;

class MyApplication: public Platform::Application {
    public:
        explicit MyApplication(const Arguments& arguments);

    private:
        void drawEvent() override;
};

MyApplication::MyApplication(const Arguments& arguments): Platform::Application{arguments} {
    using namespace Magnum::Math::Literals;

    Renderer::setClearColor(0xa5c9ea_rgbf);

    Debug{} << "Hello! This application is running on" << Context::current().version()
            << "using" << Context::current().rendererString();
}

void MyApplication::drawEvent() {
    defaultFramebuffer.clear(FramebufferClear::Color);

    /* TODO: Add your drawing code here */

    swapBuffers();
}

MAGNUM_APPLICATION_MAIN(MyApplication)

#include <DX3D/all.h>

int main () {
    try {
        dx3d::engine dx3dEngine({{1920, 1080}, dx3d::logger::logLevel::Info});
        dx3dEngine.run();
    }
    catch(const std::runtime_error&) {
        return EXIT_FAILURE;
    }
    catch(const std::exception&) {
        return EXIT_FAILURE;
    }
    catch(...) {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

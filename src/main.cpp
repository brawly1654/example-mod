#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        log::info("Hola mundo desde mi mod!");
        FLAlertLayer::create(
            "Hola mundo",
            "Mi primer mod de Geode funciona!",
            "OK"
        )->show();

        return true;
    }
};

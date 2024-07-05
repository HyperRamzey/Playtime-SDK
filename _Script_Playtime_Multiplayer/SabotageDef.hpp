#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct SabotageDef : public _Script_Engine::TableRowBase {
    private: char pad_8[0xb8]; public:
    void* get_Name();
    void* get_Description();
    void* get_SplashDescription();
    float& get_Cooldown();
    void* get_FunctionName();
    _Script_Engine::SoundBase*& get_ActivationSound();
    _Script_Engine::Texture2D*& get_Icon();
    void* get_ActorToSabotage();
    void* get_InterfaceToSabotage();
    bool get_bShouldMulticast();
    void set_bShouldMulticast(bool value);
    bool get_bUseDuration();
    void set_bUseDuration(bool value);
    float& get_LevelOne();
    float& get_LevelTwo();
    float& get_LevelThree();
    bool get_bLevelIsCount();
    void set_bLevelIsCount(bool value);
    void* get_LevelOneDescription();
    void* get_LevelTwoDescription();
    void* get_LevelThreeDescription();
    int32_t& get_LevelOnePrice();
    int32_t& get_LevelTwoPrice();
    int32_t& get_LevelThreePrice();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}

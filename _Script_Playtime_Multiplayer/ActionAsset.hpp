#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ItemAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct ActionAsset : public ItemAsset {
    private: char pad_38[0x58]; public:
    bool get_bIsGesture();
    void set_bIsGesture(bool value);
    void* get_CharacterType();
    void* get_Anims();
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::AnimSequence* GetThirdPersonEmote(bool& Valid);
    _Script_Engine::AnimSequence* GetRightHandGesture(bool& Valid);
    _Script_Engine::AnimSequence* GetLeftHandGesture(bool& Valid);
    _Script_Engine::AnimSequence* GetFirstPersonEmote(bool& Valid);
}; // Size: 0x90
#pragma pack(pop)
}

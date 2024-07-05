#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct BackendSaveData : public _Script_CoreUObject::Object {
    private: char pad_28[0x20]; public:
    static _Script_CoreUObject::Class* static_class();
    void SuccessfullyMigratedTickets();
    void SuccessfullyMigratedFromSteam();
    void SuccessfullyCreatedUser();
    _Script_Playtime_Multiplayer::BackendSaveData* GetBackendSaveData(bool& CreatedUser, bool& MigratedFromSteam, bool& CollectedTickets);
}; // Size: 0x48
#pragma pack(pop)
}

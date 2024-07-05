#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct SkeletalMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct DebugTrainAssemblyData {
    private: char pad_0[0x18]; public:
    _Script_Engine::SkeletalMesh*& get_TrainLocomotive();
    _Script_Engine::SkeletalMesh*& get_TrainTender();
    _Script_Engine::SkeletalMesh*& get_PassengerCart();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}

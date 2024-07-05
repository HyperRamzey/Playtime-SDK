#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Function;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneEventPtrs {
    private: char pad_0[0x28]; public:
    _Script_CoreUObject::Function*& get_Function();
    void* get_BoundObjectProperty();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}

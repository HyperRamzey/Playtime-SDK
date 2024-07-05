#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneNameableTrack.hpp"
namespace _Script_ControlRig {
struct ControlRig;
}
namespace _Script_MovieScene {
struct MovieSceneSection;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct MovieSceneControlRigParameterTrack : public _Script_MovieScene::MovieSceneNameableTrack {
    private: char pad_90[0x38]; public:
    _Script_ControlRig::ControlRig*& get_ControlRig();
    _Script_MovieScene::MovieSceneSection*& get_SectionToKey();
    void* get_Sections();
    void* get_TrackName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}

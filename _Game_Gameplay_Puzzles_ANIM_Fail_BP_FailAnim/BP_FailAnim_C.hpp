#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Paper2D {
struct PaperFlipbookComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct TextRenderComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Game_Gameplay_Puzzles_ANIM_Fail_BP_FailAnim {
#pragma pack(push, 1)
struct BP_FailAnim_C : public _Script_Engine::Actor {
    private: char pad_220[0x20]; public:
    void* get_UberGraphFrame();
    _Script_Paper2D::PaperFlipbookComponent*& get_FB_fail();
    _Script_Engine::TextRenderComponent*& get_TextRender();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveBeginPlay0();
    void ReceiveTick0(float DeltaSeconds);
    void BndEvt__BP_FailAnim_FB_fail_K2Node_ComponentBoundEvent_0_FlipbookFinishedPlaySignature__DelegateSignature();
    void ExecuteUbergraph_BP_FailAnim(int32_t EntryPoint);
}; // Size: 0x240
#pragma pack(pop)
}

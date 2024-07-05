#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneMarginSection.hpp"
_Script_CoreUObject::Class* _Script_UMG::MovieSceneMarginSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.MovieSceneMarginSection");
    return result;
}
void* _Script_UMG::MovieSceneMarginSection::get_BottomCurve() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void* _Script_UMG::MovieSceneMarginSection::get_LeftCurve() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Script_UMG::MovieSceneMarginSection::get_TopCurve() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_UMG::MovieSceneMarginSection::get_RightCurve() {
    return (void*)((uintptr_t)this + 0x230);
}

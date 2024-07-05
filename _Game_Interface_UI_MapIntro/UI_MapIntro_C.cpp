#include "..\FUObjectArray.hpp"
#include "UI_MapIntro_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void _Game_Interface_UI_MapIntro::UI_MapIntro_C::ExecuteUbergraph_UI_MapIntro(int32_t EntryPoint) {
    return;
}
void* _Game_Interface_UI_MapIntro::UI_MapIntro_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_CoreUObject::Class* _Game_Interface_UI_MapIntro::UI_MapIntro_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/UI_MapIntro.UI_MapIntro_C");
    return result;
}
_Script_UMG::WidgetAnimation*& _Game_Interface_UI_MapIntro::UI_MapIntro_C::get_FadeOut() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_UI_MapIntro::UI_MapIntro_C::get_Image_101() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::TextBlock*& _Game_Interface_UI_MapIntro::UI_MapIntro_C::get_TextBlock_601() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
void* _Game_Interface_UI_MapIntro::UI_MapIntro_C::get_LevelName() {
    return (void*)((uintptr_t)this + 0x280);
}
void _Game_Interface_UI_MapIntro::UI_MapIntro_C::Construct0() {
    return;
}

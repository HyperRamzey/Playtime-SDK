#include "..\FUObjectArray.hpp"
#include "UI_N_Loading_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::WidgetAnimation*& _Game_Interface_Content_UI_N_Loading::UI_N_Loading_C::get_Spin() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_Content_UI_N_Loading::UI_N_Loading_C::get_LoadingTexture() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_CoreUObject::Class* _Game_Interface_Content_UI_N_Loading::UI_N_Loading_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Content/UI_N_Loading.UI_N_Loading_C");
    return result;
}

#include "..\FUObjectArray.hpp"
#include "UI_HandPadCharge_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::ProgressBar*& _Game_Interface_Misc_UI_HandPadCharge::UI_HandPadCharge_C::get_ProgressBar_37() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x270);
}
void* _Game_Interface_Misc_UI_HandPadCharge::UI_HandPadCharge_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_Misc_UI_HandPadCharge::UI_HandPadCharge_C::get_Image_56() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_CoreUObject::Object*& _Game_Interface_Misc_UI_HandPadCharge::UI_HandPadCharge_C::get_HandPadLeft() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x278);
}
_Script_CoreUObject::Object*& _Game_Interface_Misc_UI_HandPadCharge::UI_HandPadCharge_C::get_HandPadRight() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x280);
}
float _Game_Interface_Misc_UI_HandPadCharge::UI_HandPadCharge_C::GetPercent_0() {
    return;
}
_Script_CoreUObject::Class* _Game_Interface_Misc_UI_HandPadCharge::UI_HandPadCharge_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Misc/UI_HandPadCharge.UI_HandPadCharge_C");
    return result;
}
void _Game_Interface_Misc_UI_HandPadCharge::UI_HandPadCharge_C::UpdateChargeBarLeft(float CurrentCharge, float MaxCharge) {
    return;
}
void _Game_Interface_Misc_UI_HandPadCharge::UI_HandPadCharge_C::UpdateChargeBarRight(float CurrentCharge, float MaxCharge) {
    return;
}
void _Game_Interface_Misc_UI_HandPadCharge::UI_HandPadCharge_C::ExecuteUbergraph_UI_HandPadCharge(int32_t EntryPoint) {
    return;
}

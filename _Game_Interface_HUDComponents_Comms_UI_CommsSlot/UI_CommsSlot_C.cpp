#include "..\FUObjectArray.hpp"
#include "UI_CommsSlot_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C::get_CommSelected() {
    return (void*)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
void _Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C::Set_Hovered(bool Index) {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C::get_CommText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x270);
}
_Script_UMG::Overlay*& _Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C::get_Container() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x278);
}
void* _Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C::get_CommType() {
    return (void*)((uintptr_t)this + 0x298);
}
_Script_UMG::Image*& _Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C::get_Icon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
void* _Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C::get_ButtonText() {
    return (void*)((uintptr_t)this + 0x2a0);
}
float& _Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C::get_Rotation() {
    return *(float*)((uintptr_t)this + 0x2b8);
}
_Script_CoreUObject::Class* _Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/HUDComponents/Comms/UI_CommsSlot.UI_CommsSlot_C");
    return result;
}
void _Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C::ExecuteUbergraph_UI_CommsSlot(int32_t EntryPoint) {
    return;
}
void _Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C::CommSelected__DelegateSignature(_Game_Interface_HUDComponents_Comms_UI_CommsSlot::UI_CommsSlot_C* CalledCom) {
    return;
}

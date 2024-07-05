#include "..\FUObjectArray.hpp"
#include "BP_MenuEventPreview_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BillboardComponent.hpp"
void* _Game_Tools_Game_Events_BP_MenuEventPreview::BP_MenuEventPreview_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_Engine::BillboardComponent*& _Game_Tools_Game_Events_BP_MenuEventPreview::BP_MenuEventPreview_C::get_Handle() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x228);
}
void* _Game_Tools_Game_Events_BP_MenuEventPreview::BP_MenuEventPreview_C::get_Debug() {
    return (void*)((uintptr_t)this + 0x230);
}
bool _Game_Tools_Game_Events_BP_MenuEventPreview::BP_MenuEventPreview_C::get_bPreview() {
    return (*(uint8_t*)((uintptr_t)this + 0x240 + 0)) & 1 != 0;
}
void _Game_Tools_Game_Events_BP_MenuEventPreview::BP_MenuEventPreview_C::set_bPreview(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x240 + 0);
    *(uint8_t*)((uintptr_t)this + 0x240 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Tools_Game_Events_BP_MenuEventPreview::BP_MenuEventPreview_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Tools/Game/Events/BP_MenuEventPreview.BP_MenuEventPreview_C");
    return result;
}
void* _Game_Tools_Game_Events_BP_MenuEventPreview::BP_MenuEventPreview_C::get_Event() {
    return (void*)((uintptr_t)this + 0x241);
}
void _Game_Tools_Game_Events_BP_MenuEventPreview::BP_MenuEventPreview_C::ChangeMenu() {
    return;
}
void _Game_Tools_Game_Events_BP_MenuEventPreview::BP_MenuEventPreview_C::ExecuteUbergraph_BP_MenuEventPreview(int32_t EntryPoint) {
    return;
}
void _Game_Tools_Game_Events_BP_MenuEventPreview::BP_MenuEventPreview_C::Debug__DelegateSignature() {
    return;
}

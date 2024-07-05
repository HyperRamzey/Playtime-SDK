#include "..\FUObjectArray.hpp"
#include "UI_Reward_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Interface_IngameScreens_UI_Reward::UI_Reward_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Button*& _Game_Interface_IngameScreens_UI_Reward::UI_Reward_C::get_Button() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x270);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_IngameScreens_UI_Reward::UI_Reward_C::get_Init() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_Reward::UI_Reward_C::get_Image_109() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_CoreUObject::Class* _Game_Interface_IngameScreens_UI_Reward::UI_Reward_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/IngameScreens/UI_Reward.UI_Reward_C");
    return result;
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_Reward::UI_Reward_C::get_Label() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_Reward::UI_Reward_C::get_Label_1() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
void* _Game_Interface_IngameScreens_UI_Reward::UI_Reward_C::Get_Label_Text_0() {
    return;
}
void _Game_Interface_IngameScreens_UI_Reward::UI_Reward_C::Construct0() {
    return;
}
void _Game_Interface_IngameScreens_UI_Reward::UI_Reward_C::ExecuteUbergraph_UI_Reward(int32_t EntryPoint) {
    return;
}

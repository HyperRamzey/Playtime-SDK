#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_General_UI_BackButton\UI_BackButton_C.hpp"
#include "..\_Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins\UI_BuyPlaycoins_C.hpp"
#include "UI_CoinsOnly_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Interface_MainMenu_BuyPoints_UI_CoinsOnly::UI_CoinsOnly_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Game_Interface_General_UI_BackButton::UI_BackButton_C*& _Game_Interface_MainMenu_BuyPoints_UI_CoinsOnly::UI_CoinsOnly_C::get_UI_BackButton() {
    return *(_Game_Interface_General_UI_BackButton::UI_BackButton_C**)((uintptr_t)this + 0x280);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_BuyPoints_UI_CoinsOnly::UI_CoinsOnly_C::get_Init() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_BuyPoints_UI_CoinsOnly::UI_CoinsOnly_C::get_Image_33() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_BuyPoints_UI_CoinsOnly::UI_CoinsOnly_C::get_Title() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C*& _Game_Interface_MainMenu_BuyPoints_UI_CoinsOnly::UI_CoinsOnly_C::get_UI_BuyPlaycoins() {
    return *(_Game_Interface_MainMenu_BuyPoints_UI_BuyPlaycoins::UI_BuyPlaycoins_C**)((uintptr_t)this + 0x288);
}
void _Game_Interface_MainMenu_BuyPoints_UI_CoinsOnly::UI_CoinsOnly_C::Construct0() {
    return;
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_BuyPoints_UI_CoinsOnly::UI_CoinsOnly_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/BuyPoints/UI_CoinsOnly.UI_CoinsOnly_C");
    return result;
}
void _Game_Interface_MainMenu_BuyPoints_UI_CoinsOnly::UI_CoinsOnly_C::BndEvt__UI_CoinsOnly_UI_BackButton_K2Node_ComponentBoundEvent_0_Released__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_BuyPoints_UI_CoinsOnly::UI_CoinsOnly_C::ExecuteUbergraph_UI_CoinsOnly(int32_t EntryPoint) {
    return;
}

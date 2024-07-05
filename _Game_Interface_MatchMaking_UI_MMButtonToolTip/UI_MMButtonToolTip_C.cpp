#include "..\FUObjectArray.hpp"
#include "UI_MMButtonToolTip_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::TextBlock*& _Game_Interface_MatchMaking_UI_MMButtonToolTip::UI_MMButtonToolTip_C::get_ButtonLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x260);
}
_Script_UMG::TextBlock*& _Game_Interface_MatchMaking_UI_MMButtonToolTip::UI_MMButtonToolTip_C::get_DescriptionLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_MatchMaking_UI_MMButtonToolTip::UI_MMButtonToolTip_C::get_Image_36() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_CoreUObject::Class* _Game_Interface_MatchMaking_UI_MMButtonToolTip::UI_MMButtonToolTip_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MatchMaking/UI_MMButtonToolTip.UI_MMButtonToolTip_C");
    return result;
}

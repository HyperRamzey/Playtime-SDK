#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab {
struct UI_CosmeticCatalogTab_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Shoppy_Widgets_UI_CosmeticFilter {
struct UI_CosmeticFilter_C;
}
namespace _Game_Interface_Shoppy_Widgets_UI_FilterTab {
#pragma pack(push, 1)
struct UI_FilterTab_C : public _Script_UMG::UserWidget {
    private: char pad_260[0x40]; public:
    void* get_UberGraphFrame();
    _Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C*& get_UI_CosmeticCatalogTab();
    _Game_Interface_Shoppy_Widgets_UI_CosmeticFilter::UI_CosmeticFilter_C*& get_UI_CosmeticFilter();
    bool get_isFilterBoxOpen();
    void set_isFilterBoxOpen(bool value);
    void* get_Filter();
    void* get_OpeningFilter();
    void* get_ClosingFilter();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void BndEvt__UI_FilterTab_UI_CosmeticCatalogTab_K2Node_ComponentBoundEvent_0_ButtonRelease__DelegateSignature(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalogTab::UI_CosmeticCatalogTab_C* ObjectReference, void* ItemType, void* CosmeticType, void* SoundPackType);
    void BndEvt__UI_FilterTab_UI_CosmeticFilter_K2Node_ComponentBoundEvent_1_FilterItems__DelegateSignature(void* Filter);
    void CloseFilterBox();
    void OpenFilterBox();
    void ExecuteUbergraph_UI_FilterTab(int32_t EntryPoint);
    void ClosingFilter__DelegateSignature();
    void OpeningFilter__DelegateSignature();
}; // Size: 0x2a0
#pragma pack(pop)
}

#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Script_UMG {
struct UniformGridPanel;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Game_Interface_Shoppy_Widgets_UI_BundleCard {
struct UI_BundleCard_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_Shoppy_Widgets_UI_TeaserButton {
struct UI_TeaserButton_C;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Game_Interface_Shoppy_Widgets_UI_FeaturedItems {
#pragma pack(push, 1)
struct UI_FeaturedItems_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xa8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::VerticalBox*& get_BundleTeaserContainer();
    _Script_UMG::VerticalBox*& get_NewItemsContainer();
    _Script_UMG::UniformGridPanel*& get_SaleItemsContainer();
    _Game_Interface_Shoppy_Widgets_UI_BundleCard::UI_BundleCard_C*& get_UI_BundleCard();
    _Game_Interface_Shoppy_Widgets_UI_TeaserButton::UI_TeaserButton_C*& get_UI_TeaserButton();
    float& get_BundleTop();
    float& get_BundleBottom();
    float& get_TeaserTop();
    float& get_TeaserBottom();
    void* get_OnFeaturedItemSelected();
    void* get_ShowBundleInfo();
    void* get_FeaturedItems();
    void* get_BundleItems();
    void* get_SaleItems();
    int32_t& get_BundleId();
    void* get_OnBundleSelected();
    static _Script_CoreUObject::Class* static_class();
    _Script_UMG::SizeBox* CreateSizeBox(float InMaxDesiredSize);
    void OnLoaded_0F6CBBA74BEF4047D9A8A38E90A182E9(_Script_CoreUObject::Object* Loaded);
    void PreConstruct0(bool IsDesignTime);
    void FeaturedItemSelected(void* Name, int32_t PlayCoinPrice, int32_t TicketPrice, int32_t ID);
    void GenerateFeaturedItems();
    void BndEvt__UI_FeaturedItems_UI_TeaserButton_K2Node_ComponentBoundEvent_0_TeaserButtonPressed__DelegateSignature();
    void OnInitialized0();
    void BndEvt__UI_FeaturedItems_UI_BundleCard_K2Node_ComponentBoundEvent_1_BundleCardPressed__DelegateSignature();
    void OnShoppySuccess(void*& Shoppy);
    void OnShoppyFailure(void* ErrorMessage);
    void ExecuteUbergraph_UI_FeaturedItems(int32_t EntryPoint);
    void OnBundleSelected__DelegateSignature(int32_t BundleId);
    void ShowBundleInfo__DelegateSignature();
    void OnFeaturedItemSelected__DelegateSignature(void* Name, int32_t PlayCoinPrice, int32_t TicketPrice, int32_t ID);
}; // Size: 0x308
#pragma pack(pop)
}

#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_SteamCore {
struct LobbyMatchList;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface {
#pragma pack(push, 1)
struct UI_PrivateMatchCodeInterface_C : public _Script_UMG::UserWidget {
    private: char pad_260[0xd0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::TextBlock*& get_Num1Label();
    _Script_UMG::TextBlock*& get_Num2Label();
    _Script_UMG::TextBlock*& get_Num3Label();
    _Script_UMG::TextBlock*& get_Num4Label();
    _Script_UMG::Button*& get_ShowHideButton();
    _Script_UMG::Image*& get_ShowHideEyeImage();
    bool get_isNumPadVisible();
    void set_isNumPadVisible(bool value);
    void* get_TargetCode();
    void* get_RandomStream();
    void* get_LocalCode();
    void* get_FormattedTargetCode();
    void* get_FormattedLocalCode();
    void* get_GameName();
    void* get_GameServer_Timer();
    void* get_OnPlayerJoinedLobby();
    bool get_ShowingCode();
    void set_ShowingCode(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetCodeVisibility(bool ShowCode);
    void GetCode(void*& Code);
    void RandomizeCode();
    void ClearCode();
    void Handle_New_Input(int32_t Input_Key);
    void OnCallback_6591F97E42D3254104C8A1B52DE3EB3F(_Script_SteamCore::LobbyMatchList& Data, bool bWasSuccessful);
    void HandleCodeGeneration();
    void BndEvt__UI_PrivateMatch_Button_55_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_PrivateMatchCodeInterface(int32_t EntryPoint);
    void OnPlayerJoinedLobby__DelegateSignature(int32_t LobbyMemberIndex, _Script_Engine::Texture2D* SteamAvatar);
}; // Size: 0x330
#pragma pack(pop)
}

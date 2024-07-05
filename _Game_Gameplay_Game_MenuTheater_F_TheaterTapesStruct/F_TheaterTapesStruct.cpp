#include "..\FUObjectArray.hpp"
#include "F_TheaterTapesStruct.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_MediaAssets\MediaSource.hpp"
_Script_Engine::DataTable*& _Game_Gameplay_Game_MenuTheater_F_TheaterTapesStruct::F_TheaterTapesStruct::get_SubtitleDataTable_23_FBF8D2A64732F8E43EADB4AFE2257758() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x50);
}
_Script_Engine::Texture2D*& _Game_Gameplay_Game_MenuTheater_F_TheaterTapesStruct::F_TheaterTapesStruct::get_Thumbnail_5_01E2973A4A425ADCE14AB799A4C36D64() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x0);
}
void* _Game_Gameplay_Game_MenuTheater_F_TheaterTapesStruct::F_TheaterTapesStruct::get_Name_6_BDECDDC44323A4D50A36CD8F950C7FEE() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Game_Gameplay_Game_MenuTheater_F_TheaterTapesStruct::F_TheaterTapesStruct::get_UnlockDescription_28_A0E1CD5F4F0F8824471598886C38F63D() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_MediaAssets::MediaSource*& _Game_Gameplay_Game_MenuTheater_F_TheaterTapesStruct::F_TheaterTapesStruct::get_Movie_13_E0DA13F843C5C51C6551558A6A24C7DE() {
    return *(_Script_MediaAssets::MediaSource**)((uintptr_t)this + 0x30);
}
void* _Game_Gameplay_Game_MenuTheater_F_TheaterTapesStruct::F_TheaterTapesStruct::get_Description_27_0239DBC74DE92FC6B8558AB99647615B() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Game_Gameplay_Game_MenuTheater_F_TheaterTapesStruct::F_TheaterTapesStruct::get_SubtitleRowName_22_848DD10941F2F79F4A75099B5DBAB63D() {
    return (void*)((uintptr_t)this + 0x58);
}
int32_t& _Game_Gameplay_Game_MenuTheater_F_TheaterTapesStruct::F_TheaterTapesStruct::get_NumberofSubtitles_26_4A1FAD4842984C5586DC9ABB3830F067() {
    return *(int32_t*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Game_Gameplay_Game_MenuTheater_F_TheaterTapesStruct::F_TheaterTapesStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Gameplay/Game/MenuTheater/F_TheaterTapesStruct.F_TheaterTapesStruct");
    return result;
}

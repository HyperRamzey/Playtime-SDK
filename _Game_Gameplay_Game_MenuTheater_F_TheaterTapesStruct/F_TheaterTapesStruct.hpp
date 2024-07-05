#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_MediaAssets {
struct MediaSource;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Game_MenuTheater_F_TheaterTapesStruct {
#pragma pack(push, 1)
struct F_TheaterTapesStruct {
    private: char pad_0[0x70]; public:
    _Script_Engine::Texture2D*& get_Thumbnail_5_01E2973A4A425ADCE14AB799A4C36D64();
    void* get_Name_6_BDECDDC44323A4D50A36CD8F950C7FEE();
    void* get_Description_27_0239DBC74DE92FC6B8558AB99647615B();
    _Script_MediaAssets::MediaSource*& get_Movie_13_E0DA13F843C5C51C6551558A6A24C7DE();
    void* get_UnlockDescription_28_A0E1CD5F4F0F8824471598886C38F63D();
    _Script_Engine::DataTable*& get_SubtitleDataTable_23_FBF8D2A64732F8E43EADB4AFE2257758();
    void* get_SubtitleRowName_22_848DD10941F2F79F4A75099B5DBAB63D();
    int32_t& get_NumberofSubtitles_26_4A1FAD4842984C5586DC9ABB3830F067();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}

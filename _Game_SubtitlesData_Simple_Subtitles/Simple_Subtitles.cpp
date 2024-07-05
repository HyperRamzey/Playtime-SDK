#include "..\FUObjectArray.hpp"
#include "Simple_Subtitles.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_SubtitlesData_Simple_Subtitles::Simple_Subtitles::get_ENGLISH_26_BB5A0C14407BB0302149D58F7AD6B230() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Game_SubtitlesData_Simple_Subtitles::Simple_Subtitles::get_StartTime_35_BB590E1B4CA94D0D43F20C813CCDA064() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Game_SubtitlesData_Simple_Subtitles::Simple_Subtitles::get_EndTime_38_7E09828344F1E5FF33A6B191C9FE521A() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Game_SubtitlesData_Simple_Subtitles::Simple_Subtitles::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/SubtitlesData/Simple_Subtitles.Simple_Subtitles");
    return result;
}

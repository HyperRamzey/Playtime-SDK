#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\DateTime.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "FileManAdvancedBPLibrary.hpp"
bool _Script_FileManAdvanced::FileManAdvancedBPLibrary::CreateDirectory(void* FolderName) {
    return;
}
_Script_CoreUObject::Class* _Script_FileManAdvanced::FileManAdvancedBPLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/FileManAdvanced.FileManAdvancedBPLibrary");
    return result;
}
void* _Script_FileManAdvanced::FileManAdvancedBPLibrary::GetLaunchDirectory() {
    return;
}
bool _Script_FileManAdvanced::FileManAdvancedBPLibrary::WriteFile(void* Content, void* Filename) {
    return;
}
bool _Script_FileManAdvanced::FileManAdvancedBPLibrary::ReadFile(void* Filename, void*& Content) {
    return;
}
void* _Script_FileManAdvanced::FileManAdvancedBPLibrary::GetMainDirectory() {
    return;
}
_Script_Engine::Texture2D* _Script_FileManAdvanced::FileManAdvancedBPLibrary::LoadTextureFromFile(void* Filename) {
    return;
}
bool _Script_FileManAdvanced::FileManAdvancedBPLibrary::GetFilesInPath(void*& Files, void* Path, bool SearchSubfolders) {
    return;
}
_Script_CoreUObject::DateTime _Script_FileManAdvanced::FileManAdvancedBPLibrary::LastModifiedTime(void* Filename) {
    return;
}
void* _Script_FileManAdvanced::FileManAdvancedBPLibrary::GetEngineDirectory() {
    return;
}
bool _Script_FileManAdvanced::FileManAdvancedBPLibrary::DeleteFile(void* Filename) {
    return;
}
bool _Script_FileManAdvanced::FileManAdvancedBPLibrary::DeleteDirectory(void* FolderName) {
    return;
}

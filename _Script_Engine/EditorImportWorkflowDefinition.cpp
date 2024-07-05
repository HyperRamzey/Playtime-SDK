#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EditorImportWorkflowDefinition.hpp"
_Script_CoreUObject::Class* _Script_Engine::EditorImportWorkflowDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.EditorImportWorkflowDefinition");
    return result;
}
void* _Script_Engine::EditorImportWorkflowDefinition::get_ImportFilePath() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::EditorImportWorkflowDefinition::get_FactorySettings() {
    return (void*)((uintptr_t)this + 0x10);
}

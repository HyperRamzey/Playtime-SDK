#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MeshSelectionSet.hpp"
#include "SelectionSet.hpp"
void* _Script_InteractiveToolsFramework::MeshSelectionSet::get_Vertices() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_InteractiveToolsFramework::MeshSelectionSet::get_Edges() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_InteractiveToolsFramework::MeshSelectionSet::get_Faces() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_InteractiveToolsFramework::MeshSelectionSet::get_Groups() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::MeshSelectionSet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.MeshSelectionSet");
    return result;
}

#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InteractiveToolBuilder.hpp"
#include "MeshSurfacePointToolBuilder.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::MeshSurfacePointToolBuilder::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.MeshSurfacePointToolBuilder");
    return result;
}

#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionObjectOrientation.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionObjectOrientation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionObjectOrientation");
    return result;
}

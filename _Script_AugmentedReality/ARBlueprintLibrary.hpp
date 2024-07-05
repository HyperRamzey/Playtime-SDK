#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ARSessionStatus.hpp"
#include "..\_Script_CoreUObject\IntPoint.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_AugmentedReality {
struct ARTrackedGeometry;
}
namespace _Script_AugmentedReality {
struct ARTraceResult;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_AugmentedReality {
struct ARSessionConfig;
}
namespace _Script_AugmentedReality {
struct ARTextureCameraDepth;
}
namespace _Script_AugmentedReality {
struct ARPin;
}
namespace _Script_AugmentedReality {
struct ARCameraIntrinsics;
}
namespace _Script_AugmentedReality {
struct ARTexture;
}
namespace _Script_AugmentedReality {
struct ARLightEstimate;
}
namespace _Script_AugmentedReality {
struct ARTextureCameraImage;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_AugmentedReality {
struct ARCandidateImage;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void UnpinComponent(_Script_Engine::SceneComponent* ComponentToUnpin);
    bool ToggleARCapture(bool bOnOff, void* CaptureType);
    void StopARSession();
    void StartARSession(_Script_AugmentedReality::ARSessionConfig* SessionConfig);
    void SetEnabledXRCamera(bool bOnOff);
    void SetARWorldScale(float InWorldScale);
    void SetARWorldOriginLocationAndRotation(_Script_CoreUObject::Vector OriginLocation, _Script_CoreUObject::Rotator OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection);
    void SetAlignmentTransform(_Script_CoreUObject::Transform& InAlignmentTransform);
    bool SaveARPinToLocalStore(void* InSaveName, _Script_AugmentedReality::ARPin* InPin);
    _Script_CoreUObject::IntPoint ResizeXRCamera(_Script_CoreUObject::IntPoint& InSize);
    void RemovePin(_Script_AugmentedReality::ARPin* PinToRemove);
    void RemoveARPinFromLocalStore(void* InSaveName);
    void RemoveAllARPinsFromLocalStore();
    _Script_AugmentedReality::ARPin* PinComponentToTraceResult(_Script_Engine::SceneComponent* ComponentToPin, _Script_AugmentedReality::ARTraceResult& TraceResult, void* DebugName);
    bool PinComponentToARPin(_Script_Engine::SceneComponent* ComponentToPin, _Script_AugmentedReality::ARPin* Pin);
    _Script_AugmentedReality::ARPin* PinComponent(_Script_Engine::SceneComponent* ComponentToPin, _Script_CoreUObject::Transform& PinToWorldTransform, _Script_AugmentedReality::ARTrackedGeometry* TrackedGeometry, void* DebugName);
    void PauseARSession();
    void* LoadARPinsFromLocalStore();
    void* LineTraceTrackedObjects3D(_Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
    void* LineTraceTrackedObjects(_Script_CoreUObject::Vector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
    bool IsSessionTypeSupported(void* SessionType);
    bool IsSessionTrackingFeatureSupported(void* SessionType, void* SessionTrackingFeature);
    bool IsSceneReconstructionSupported(void* SessionType, void* SceneReconstructionMethod);
    bool IsARSupported();
    bool IsARPinLocalStoreSupported();
    bool IsARPinLocalStoreReady();
    void* GetWorldMappingStatus();
    void* GetTrackingQualityReason();
    void* GetTrackingQuality();
    void* GetSupportedVideoFormats(void* SessionType);
    _Script_AugmentedReality::ARSessionConfig* GetSessionConfig();
    void* GetPointCloud();
    _Script_AugmentedReality::ARTexture* GetPersonSegmentationImage();
    _Script_AugmentedReality::ARTexture* GetPersonSegmentationDepthImage();
    bool GetObjectClassificationAtLocation(_Script_CoreUObject::Vector& InWorldLocation, void*& OutClassification, _Script_CoreUObject::Vector& OutClassificationLocation, float MaxLocationDiff);
    int32_t GetNumberOfTrackedFacesSupported();
    _Script_AugmentedReality::ARLightEstimate* GetCurrentLightEstimate();
    bool GetCameraIntrinsics(_Script_AugmentedReality::ARCameraIntrinsics& OutCameraIntrinsics);
    _Script_AugmentedReality::ARTextureCameraImage* GetCameraImage();
    _Script_AugmentedReality::ARTextureCameraDepth* GetCameraDepth();
    float GetARWorldScale();
    _Script_AugmentedReality::ARTexture* GetARTexture(void* TextureType);
    _Script_AugmentedReality::ARSessionStatus GetARSessionStatus();
    void* GetAllTrackedPoses();
    void* GetAllTrackedPoints();
    void* GetAllTrackedPlanes();
    void* GetAllTrackedImages();
    void* GetAllTrackedEnvironmentCaptureProbes();
    void* GetAllTracked2DPoses();
    void* GetAllPins();
    void* GetAllGeometriesByClass(void* GeometryClass);
    void* GetAllGeometries();
    _Script_CoreUObject::Transform GetAlignmentTransform();
    void* FindTrackedPointsByName(void* PointName);
    void DebugDrawTrackedGeometry(_Script_AugmentedReality::ARTrackedGeometry* TrackedGeometry, _Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::LinearColor Color, float OutlineThickness, float PersistForSeconds);
    void DebugDrawPin(_Script_AugmentedReality::ARPin* ARPin, _Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::LinearColor Color, float Scale, float PersistForSeconds);
    void CalculateClosestIntersection(void*& StartPoints, void*& EndPoints, _Script_CoreUObject::Vector& ClosestIntersection);
    void CalculateAlignmentTransform(_Script_CoreUObject::Transform& TransformInFirstCoordinateSystem, _Script_CoreUObject::Transform& TransformInSecondCoordinateSystem, _Script_CoreUObject::Transform& AlignmentTransform);
    bool AddTrackedPointWithName(_Script_CoreUObject::Transform& WorldTransform, void* PointName, bool bDeletePointsWithSameName);
    _Script_AugmentedReality::ARCandidateImage* AddRuntimeCandidateImage(_Script_AugmentedReality::ARSessionConfig* SessionConfig, _Script_Engine::Texture2D* CandidateTexture, void* FriendlyName, float PhysicalWidth);
    bool AddManualEnvironmentCaptureProbe(_Script_CoreUObject::Vector Location, _Script_CoreUObject::Vector Extent);
}; // Size: 0x28
#pragma pack(pop)
}

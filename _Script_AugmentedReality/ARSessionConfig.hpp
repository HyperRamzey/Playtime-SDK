#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ARVideoFormat.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_AugmentedReality {
struct ARCandidateObject;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
struct ARCandidateImage;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARSessionConfig : public _Script_Engine::DataAsset {
    private: char pad_30[0xe0]; public:
    bool get_bGenerateMeshDataFromTrackedGeometry();
    void set_bGenerateMeshDataFromTrackedGeometry(bool value);
    bool get_bGenerateCollisionForMeshData();
    void set_bGenerateCollisionForMeshData(bool value);
    bool get_bGenerateNavMeshForMeshData();
    void set_bGenerateNavMeshForMeshData(bool value);
    bool get_bUseMeshDataForOcclusion();
    void set_bUseMeshDataForOcclusion(bool value);
    bool get_bRenderMeshDataInWireframe();
    void set_bRenderMeshDataInWireframe(bool value);
    bool get_bTrackSceneObjects();
    void set_bTrackSceneObjects(bool value);
    bool get_bUsePersonSegmentationForOcclusion();
    void set_bUsePersonSegmentationForOcclusion(bool value);
    bool get_bUseSceneDepthForOcclusion();
    void set_bUseSceneDepthForOcclusion(bool value);
    bool get_bUseAutomaticImageScaleEstimation();
    void set_bUseAutomaticImageScaleEstimation(bool value);
    bool get_bUseStandardOnboardingUX();
    void set_bUseStandardOnboardingUX(bool value);
    void* get_WorldAlignment();
    void* get_SessionType();
    void* get_PlaneDetectionMode();
    bool get_bHorizontalPlaneDetection();
    void set_bHorizontalPlaneDetection(bool value);
    bool get_bVerticalPlaneDetection();
    void set_bVerticalPlaneDetection(bool value);
    bool get_bEnableAutoFocus();
    void set_bEnableAutoFocus(bool value);
    void* get_LightEstimationMode();
    void* get_FrameSyncMode();
    bool get_bEnableAutomaticCameraOverlay();
    void set_bEnableAutomaticCameraOverlay(bool value);
    bool get_bEnableAutomaticCameraTracking();
    void set_bEnableAutomaticCameraTracking(bool value);
    bool get_bResetCameraTracking();
    void set_bResetCameraTracking(bool value);
    bool get_bResetTrackedObjects();
    void set_bResetTrackedObjects(bool value);
    void* get_CandidateImages();
    int32_t& get_MaxNumSimultaneousImagesTracked();
    void* get_EnvironmentCaptureProbeType();
    void* get_WorldMapData();
    void* get_CandidateObjects();
    void* get_DesiredVideoFormat();
    bool get_bUseOptimalVideoFormat();
    void set_bUseOptimalVideoFormat(bool value);
    void* get_FaceTrackingDirection();
    void* get_FaceTrackingUpdate();
    int32_t& get_MaxNumberOfTrackedFaces();
    void* get_SerializedARCandidateImageDatabase();
    void* get_EnabledSessionTrackingFeature();
    void* get_SceneReconstructionMethod();
    void* get_PlaneComponentClass();
    void* get_PointComponentClass();
    void* get_FaceComponentClass();
    void* get_ImageComponentClass();
    void* get_QRCodeComponentClass();
    void* get_PoseComponentClass();
    void* get_EnvironmentProbeComponentClass();
    void* get_ObjectComponentClass();
    void* get_MeshComponentClass();
    void* get_GeoAnchorComponentClass();
    _Script_Engine::MaterialInterface*& get_DefaultMeshMaterial();
    _Script_Engine::MaterialInterface*& get_DefaultWireframeMeshMaterial();
    static _Script_CoreUObject::Class* static_class();
    bool ShouldResetTrackedObjects();
    bool ShouldResetCameraTracking();
    bool ShouldRenderCameraOverlay();
    bool ShouldEnableCameraTracking();
    bool ShouldEnableAutoFocus();
    void SetWorldMapData(void* WorldMapData);
    void SetSessionTrackingFeatureToEnable(void* InSessionTrackingFeature);
    void SetSceneReconstructionMethod(void* InSceneReconstructionMethod);
    void SetResetTrackedObjects(bool bNewValue);
    void SetResetCameraTracking(bool bNewValue);
    void SetFaceTrackingUpdate(void* InUpdate);
    void SetFaceTrackingDirection(void* InDirection);
    void SetEnableAutoFocus(bool bNewValue);
    void SetDesiredVideoFormat(_Script_AugmentedReality::ARVideoFormat NewFormat);
    void SetCandidateObjectList(void*& InCandidateObjects);
    void* GetWorldMapData();
    void* GetWorldAlignment();
    void* GetSessionType();
    void* GetSceneReconstructionMethod();
    void* GetPlaneDetectionMode();
    int32_t GetMaxNumSimultaneousImagesTracked();
    void* GetLightEstimationMode();
    void* GetFrameSyncMode();
    void* GetFaceTrackingUpdate();
    void* GetFaceTrackingDirection();
    void* GetEnvironmentCaptureProbeType();
    void* GetEnabledSessionTrackingFeature();
    _Script_AugmentedReality::ARVideoFormat GetDesiredVideoFormat();
    void* GetCandidateObjectList();
    void* GetCandidateImageList();
    void AddCandidateObject(_Script_AugmentedReality::ARCandidateObject* CandidateObject);
    void AddCandidateImage(_Script_AugmentedReality::ARCandidateImage* NewCandidateImage);
}; // Size: 0x110
#pragma pack(pop)
}

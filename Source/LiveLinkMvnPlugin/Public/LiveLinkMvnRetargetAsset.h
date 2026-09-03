#pragma once
#include "CoreMinimal.h"
#include "LiveLinkRetargetAsset.h"
#include "EXsensMapping.h"
#include "EXsensRetargetNamingConvention.h"
#include "RemappingRowHandle.h"
#include "LiveLinkMvnRetargetAsset.generated.h"

class UAnimSequence;
class USkeletalMesh;
class USkeleton;

UCLASS(Blueprintable)
class LIVELINKMVNPLUGIN_API ULiveLinkMvnRetargetAsset : public ULiveLinkRetargetAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EXsensRetargetNamingConvention m_remapping_convention;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EXsensMapping, FRemappingRowHandle> m_remapping_rows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* m_skeletal_mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* m_skeleton;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* TPoseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsForwardY;
    
public:
    ULiveLinkMvnRetargetAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetRemappedBoneNameByConvention(EXsensMapping bone, EXsensRetargetNamingConvention Convention) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetCustomRemappedBoneName(EXsensMapping bone) const;
    
};


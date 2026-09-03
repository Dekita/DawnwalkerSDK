#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDepthMapInfluenceValue.h"
#include "ETeethMode.h"
#include "MetaHumanFaceAnimationSolver.generated.h"

class UMetaHumanConfig;

UCLASS(Blueprintable)
class METAHUMANFACEANIMATIONSOLVER_API UMetaHumanFaceAnimationSolver : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDeviceConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMetaHumanConfig* DeviceConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDepthMapInfluence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDepthMapInfluenceValue DepthMapInfluence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideEyeSolveSmoothness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EyeSolveSmoothness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideTeethMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeethMode TeethMode;
    
    UMetaHumanFaceAnimationSolver();

};


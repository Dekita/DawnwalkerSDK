#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ChoiceCameraCutDefinition.h"
#include "ResponseCameraCutsDefinitionSet.h"
#include "CameraCutGenerationConfig.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UCameraCutGenerationConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResponseCameraCutsDefinitionSet StartCutDefinitionSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResponseCameraCutsDefinitionSet> MiddleCutDefinitionSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResponseCameraCutsDefinitionSet EndCutDefinitionSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMatchChoiceShotWithPrecedingNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMatchChoiceShotWithFollowingNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChoiceCameraCutDefinition> ChoiceCutDefinitions;
    
    UCameraCutGenerationConfig();

};


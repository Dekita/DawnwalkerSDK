#pragma once
#include "CoreMinimal.h"
#include "BaseStubReference.h"
#include "PopulationAreaCommunityStubReferenceBase.generated.h"

class APopulationArea;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UPopulationAreaCommunityStubReferenceBase : public UBaseStubReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<APopulationArea> PopulationArea;
    
public:
    UPopulationAreaCommunityStubReferenceBase();

};


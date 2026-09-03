#pragma once
#include "CoreMinimal.h"
#include "PopulationAreaCommunityStubReferenceBase.h"
#include "PopulationAreaCommunityStubReference.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UPopulationAreaCommunityStubReference : public UPopulationAreaCommunityStubReferenceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
public:
    UPopulationAreaCommunityStubReference();

};


#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Conditions/MovieSceneCondition.h"
#include "EConditionCheckType.h"
#include "MovieSceneFactCondition.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DIALOGUESYSTEM_API UMovieSceneFactCondition : public UMovieSceneCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FactTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionCheckType ConditionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
public:
    UMovieSceneFactCondition();

};


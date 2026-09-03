#pragma once
#include "CoreMinimal.h"
#include "SaveGameInterface.h"
#include "CommunitySystemInterface.h"
#include "CommunitySystemImpl.generated.h"

class UActorStubSystemInterface;
class UObject;
class UPersistencySystemInterface;
class URebelCrowdPathFindingQueryOwnerWithContext;

UCLASS(Blueprintable, GlobalUserConfig, Config=Editor)
class POPULATION_API UCommunitySystemImpl : public UCommunitySystemInterface, public ISaveGameInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActorStubSystemInterface* StubSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPersistencySystemInterface* PersistencySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelCrowdPathFindingQueryOwnerWithContext* PathFindingQueryOwnerWithContext;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UObject*, uint32> DataSources;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugEnabled;
    
public:
    UCommunitySystemImpl();


    // Fix for true pure virtual functions not being implemented
};


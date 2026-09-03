#include "RebelHLTree.h"

URebelHLTree::URebelHLTree() {
    this->LastCompiledEditorDataHash = 0;
    this->Schema = NULL;
    this->NumContextData = 0;
    this->NumGlobalInstanceData = 0;
    this->EvaluatorsBegin = 0;
    this->EvaluatorsNum = 0;
    this->GlobalTasksBegin = 0;
    this->GlobalTasksNum = 0;
    this->bHasGlobalTransitionTasks = false;
}



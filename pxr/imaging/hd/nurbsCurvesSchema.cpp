//
// Copyright 2023 Pixar
//
// Licensed under the terms set forth in the LICENSE.txt file available at
// https://openusd.org/license.
//
////////////////////////////////////////////////////////////////////////

/* ************************************************************************** */
/* **                                                                      ** */
/* ** This file is generated by a script.                                  ** */
/* **                                                                      ** */
/* ** Do not edit it directly (unless it is within a CUSTOM CODE section)! ** */
/* ** Edit hdSchemaDefs.py instead to make changes.                        ** */
/* **                                                                      ** */
/* ************************************************************************** */

#include "pxr/imaging/hd/nurbsCurvesSchema.h"

#include "pxr/imaging/hd/retainedDataSource.h"

#include "pxr/base/trace/trace.h"

// --(BEGIN CUSTOM CODE: Includes)--
// --(END CUSTOM CODE: Includes)--

PXR_NAMESPACE_OPEN_SCOPE

TF_DEFINE_PUBLIC_TOKENS(HdNurbsCurvesSchemaTokens,
    HD_NURBS_CURVES_SCHEMA_TOKENS);

// --(BEGIN CUSTOM CODE: Schema Methods)--
// --(END CUSTOM CODE: Schema Methods)--

HdIntArrayDataSourceHandle
HdNurbsCurvesSchema::GetCurveVertexCounts() const
{
    return _GetTypedDataSource<HdIntArrayDataSource>(
        HdNurbsCurvesSchemaTokens->curveVertexCounts);
}

HdIntArrayDataSourceHandle
HdNurbsCurvesSchema::GetOrder() const
{
    return _GetTypedDataSource<HdIntArrayDataSource>(
        HdNurbsCurvesSchemaTokens->order);
}

HdDoubleArrayDataSourceHandle
HdNurbsCurvesSchema::GetKnots() const
{
    return _GetTypedDataSource<HdDoubleArrayDataSource>(
        HdNurbsCurvesSchemaTokens->knots);
}

HdVec2dArrayDataSourceHandle
HdNurbsCurvesSchema::GetRanges() const
{
    return _GetTypedDataSource<HdVec2dArrayDataSource>(
        HdNurbsCurvesSchemaTokens->ranges);
}

/*static*/
HdContainerDataSourceHandle
HdNurbsCurvesSchema::BuildRetained(
        const HdIntArrayDataSourceHandle &curveVertexCounts,
        const HdIntArrayDataSourceHandle &order,
        const HdDoubleArrayDataSourceHandle &knots,
        const HdVec2dArrayDataSourceHandle &ranges
)
{
    TfToken _names[4];
    HdDataSourceBaseHandle _values[4];

    size_t _count = 0;

    if (curveVertexCounts) {
        _names[_count] = HdNurbsCurvesSchemaTokens->curveVertexCounts;
        _values[_count++] = curveVertexCounts;
    }

    if (order) {
        _names[_count] = HdNurbsCurvesSchemaTokens->order;
        _values[_count++] = order;
    }

    if (knots) {
        _names[_count] = HdNurbsCurvesSchemaTokens->knots;
        _values[_count++] = knots;
    }

    if (ranges) {
        _names[_count] = HdNurbsCurvesSchemaTokens->ranges;
        _values[_count++] = ranges;
    }
    return HdRetainedContainerDataSource::New(_count, _names, _values);
}

HdNurbsCurvesSchema::Builder &
HdNurbsCurvesSchema::Builder::SetCurveVertexCounts(
    const HdIntArrayDataSourceHandle &curveVertexCounts)
{
    _curveVertexCounts = curveVertexCounts;
    return *this;
}

HdNurbsCurvesSchema::Builder &
HdNurbsCurvesSchema::Builder::SetOrder(
    const HdIntArrayDataSourceHandle &order)
{
    _order = order;
    return *this;
}

HdNurbsCurvesSchema::Builder &
HdNurbsCurvesSchema::Builder::SetKnots(
    const HdDoubleArrayDataSourceHandle &knots)
{
    _knots = knots;
    return *this;
}

HdNurbsCurvesSchema::Builder &
HdNurbsCurvesSchema::Builder::SetRanges(
    const HdVec2dArrayDataSourceHandle &ranges)
{
    _ranges = ranges;
    return *this;
}

HdContainerDataSourceHandle
HdNurbsCurvesSchema::Builder::Build()
{
    return HdNurbsCurvesSchema::BuildRetained(
        _curveVertexCounts,
        _order,
        _knots,
        _ranges
    );
}

/*static*/
HdNurbsCurvesSchema
HdNurbsCurvesSchema::GetFromParent(
        const HdContainerDataSourceHandle &fromParentContainer)
{
    return HdNurbsCurvesSchema(
        fromParentContainer
        ? HdContainerDataSource::Cast(fromParentContainer->Get(
                HdNurbsCurvesSchemaTokens->nurbsCurves))
        : nullptr);
}

/*static*/
const TfToken &
HdNurbsCurvesSchema::GetSchemaToken()
{
    return HdNurbsCurvesSchemaTokens->nurbsCurves;
}

/*static*/
const HdDataSourceLocator &
HdNurbsCurvesSchema::GetDefaultLocator()
{
    static const HdDataSourceLocator locator(GetSchemaToken());
    return locator;
} 

PXR_NAMESPACE_CLOSE_SCOPE
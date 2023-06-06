//
// Created by Stefan on 6/3/2023.
//

#ifndef METALSTARTER_APPLE_H
#define METALSTARTER_APPLE_H

#include <simd/simd.h>

#include <AppKit/AppKit.hpp>
#include <Foundation/Foundation.hpp>
#include <Metal/Metal.hpp>
#include <MetalKit/MetalKit.hpp>
#include <QuartzCore/QuartzCore.hpp>

#define AAPL_STR(x) \
  NS::String::string(x, NS::StringEncoding::UTF8StringEncoding)

#endif  // METALSTARTER_APPLE_H

/*
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import <FLAnimatedImage/FLAnimatedImage.h>
#import <SDWebImage/SDWebImage.h>

/**
 A wrapper class to allow `FLAnimatedImage` to be compatible for SDWebImage loading/cache/rendering system. The `GIF` image loading from `FLAnimatedImageView+WebCache` category, will use this subclass instead of `UIImage`.
 
 @note Though this class conforms to `SDAnimatedImage` protocol, so it's compatible to be used for `SDAnimatedImageView`. But it's normally discouraged to do so. Because it does not provide optimization for animation rendering. Instead, use `SDAnimatedImage` class with `SDAnimatedImageView`.
 */
@interface SDFLAnimatedImage : UIImage <SDAnimatedImage>

/**
 The `FLAnimatedImage` instance for GIF representation
 */
@property (nonatomic, strong, nonnull, readonly) FLAnimatedImage *animatedImage;

/**
 Create the wrapper with specify `FLAnimatedImage` instance. The instance should be nonnull.
 This is a convenience method for some use cases, for example, create a placeholder with `FLAnimatedImage`.

 @param animatedImage The `FLAnimatedImage` instance
 @return An initialized object
 */
- (nonnull instancetype)initWithAnimatedImage:(nonnull FLAnimatedImage *)animatedImage;

@end

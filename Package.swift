// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "PIAKPI",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "PIAKPI",
            targets: ["PIAKPI"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "PIAKPI",
            path: "./PIAKPI.xcframework"
        ),
    ]
)

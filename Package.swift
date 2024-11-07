// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterSed",
    products: [
        .library(name: "TreeSitterSed", targets: ["TreeSitterSed"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterSed",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterSedTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterSed",
            ],
            path: "bindings/swift/TreeSitterSedTests"
        )
    ],
    cLanguageStandard: .c11
)

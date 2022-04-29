#pragma once

#include <string>

namespace bubblematch {

  /**  Language codes to be used with the BubbleMatch class */
  enum class LanguageCode { EN, DE, ES, FR };

  /**
   * @brief A class for saying hello in multiple languages
   */
  class BubbleMatch {
    std::string name;

  public:
    /**
     * @brief Creates a new bubblematch
     * @param name the name to greet
     */
    BubbleMatch(std::string name);

    /**
     * @brief Creates a localized string containing the greeting
     * @param lang the language to greet in
     * @return a string containing the greeting
     */
    std::string greet(LanguageCode lang = LanguageCode::EN) const;
  };

}  // namespace bubblematch
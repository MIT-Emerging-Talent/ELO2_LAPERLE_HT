# Caribbean Tourism Prediction Model

## 📊 Overview

A linear regression model for predicting tourist arrivals in Caribbean
countries using UN tourism data (1995-2024). The model forecasts visitor
numbers based on year, country, and visitor type patterns.

## 🚀 Quick Start

### Installation

bash
pip install pandas scikit-learn matplotlib numpy
Basic Usage
python
from model import predict_tourists

### Predict tourists for Bahamas in 2025

prediction = predict_tourists(2025, 'Bahamas', 'tourists')

## 📈 Features

Countries: 34 Caribbean destinations
Countries: 34 Caribbean destinations

Time Period: 1995-2024

Visitor Types: Tourists, excursionists, total visitors

## 🏗️ Model Architecture

python
🏗️ Model Architecture
python

## 📊 Performance Metrics

Metric Value
           decade, post_2000, post_2010, covid_period]
📊 Performance Metrics
Metric Value

## 📁 Project Structure

text
MAE 301K trips
Best For Short-term forecasts
📁 Project Structure
text
.
├── data/
│   └── UN_tourism_caribbean_countries_cleaned.csv
├── tourism_model.py

## 🎯 Example Predictions

python
│   ├── linear_regression_model.pkl
│   └── scaler.pkl
└── README.md
🎯 Example Predictions
python

## 🔧 Usage Examples

### 1. Single Prediction

for country in countries:
    tourists_2025 = predict_tourists(2025, country, 'tourists')
    print(f"{country}: {tourists_2025:.0f}K tourists")
🔧 Usage Examples

1. Single Prediction

### 2. Batch Analysis

python
    year=2024,
    country_name='Barbados',
    visitor_type='visitors_total'
)
2. Batch Analysis

### 3. Country Ranking

python

## Compare multiple years

for year in [2026 2027,2028]:
    pred = predict_tourists(year, 'Cuba', 'tourists')
    print(f"{year}: {pred:.0f}K")
3. Country Ranking

## ⚠️ Limitations

Linear model may not capture seasonal patterns

### Top 5 predictions for 2026

countries = ['Bahamas', 'Jamaica', 'Dominican Republic',
             'Puerto Rico', 'Cuba']
predictions = {c: predict_tourists(2026, c, 'tourists')
               for c in countries}

## 📈 Model Insights

Strongest predictor: Year (+15K/year trend)

Best for 1-3 year forecasts

Excludes economic/political factors

COVID-19 period may affect accuracy

## 🔮 Future Improvements

Add SARIMA for seasonal patterns
Strongest predictor: Year (+15K/year trend)

Country variance: Significant differences between destinations

Visitor patterns: Clear distinction between tourist types

## 📄 License

MIT License - Free for academic and commercial use.

## 🤝 Contributing

Fork the repository

Include economic indicators

Implement XGBoost for non-linear relationships

Add confidence intervals

## 📚 References

UN World Tourism Organization Data
MIT License - Free for academic and commercial use.

🤝 Contributing
Fork the repository

Create a feature branch

Add tests for new features

Submit a pull request

📚 References
UN World Tourism Organization Data

Caribbean Tourism Organization Reports

Scikit-learn Documentation

Version: 1.0.0
Last Updated: December 2025
Model Type: Linear Regression
Status: Production Ready
